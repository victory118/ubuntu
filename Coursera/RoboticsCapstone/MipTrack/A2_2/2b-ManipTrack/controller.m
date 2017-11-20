
function u = controller(params, t, X)
  u=[0; 0];
  % 1. write out the forward kinematics, such that p = FK(theta1, theta2)
  % 2. Let e = p - params.traj(t) be the task-space error
  % 3. Calculate the manipulator Jacobian J = d p / d theta
  % 4. Use a "natural motion" PD controller, u = - kp * J^T * e - kd * [dth1; dth2]
  
  l1 = params.l;
  l2 = params.l;
  th1 = X(1);
  th2 = X(2);
  dth1 = X(3);
  dth2 = X(4);
  
  xpos = l1*cos(th1) + l2*cos(th1 + th2);
  ypos = l1*sin(th1) + l2*sin(th1 + th2);
  p = [xpos; ypos];
  
  dxdth1 = -l1*sin(th1);
  dxdth2 = -l2*sin(th1 + th2);
  dydth1 = l1*cos(th1);
  dydth2 = l2*cos(th1 + th2);
  J = [dxdth1, dxdth2; dydth1, dydth2];
  
  kp = 1000;
  kd = 5;
  %   err =
  %
  %    48.7391   26.7717
  %
  % Correct!
  % Enter SJWYY into the submission box.
  e = p - params.traj(t);
  u = -kp*J'*e - kd*[dth1; dth2];
  
end

