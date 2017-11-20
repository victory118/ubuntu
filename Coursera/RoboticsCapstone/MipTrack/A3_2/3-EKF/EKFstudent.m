
function xhat = EKFstudent(t, z)
  % In this exercise, you will batch-process this data: you are provided a vector of timestamps (of length T), and a 3xT matrix of observations, z.
  xhat = zeros(2,length(t));

  % Student completes this
  % z(:,i) contains [ay, az, gx] with a* in units of g's and gx in units of
  % deg/s.
  % Each row of the output, xhat(:,i) must contain [phi, phidot] where phi
  % is the roll angle in degrees, and phidot is the angular velocity in
  % deg/s. NOTE: this is the ONLY assignment where degrees are used. Use
  % radians in every other assignment.
  
  P = diag([1, 1]);
  Q = diag([1, 10]);
  R = diag([5e-2, 5e-2, 5e-2]);
  
%   P = diag([1, 1]);
%   Q = diag([1, 10]);
%   R = diag([5e-2, 5e-2, 5e-2]);
%   
%   err =
% 
%   356.7688  387.7060
% 
% Correct!
% Enter 9WSVN into the submission box.
  
  for i = 2:length(t)
      
      % Prediction: Propagate previous state estimate and covariance to
      % current step
      dt = t(i) - t(i-1);
      A = [1 dt; 0 1];
      xpred = A*xhat(:,i-1);
      P = A*P*A' + Q;
      
      % Update: Calculate optimal Kalman gain and refine state estimate and
      % covariance using measurement
      H = [pi/180*cosd(xpred(1)) 0; -pi/180*sin(xpred(1)) 0; 0 1];
      K = P*H'/(H*P*H' + R);
      h = [sind(xpred(1)); cosd(xpred(1)); xpred(2)];
      xhat(:,i) = xpred + K*(z(:,i) - h);
      P = (eye(2) - K*H)*P;
  end    
  
end
