
function u = controller(params, t, x, xd)
  % x = current position
  % xd = current velocity

  % Use params.traj(t) to get the reference trajectory
  % e.g. (x - params.traj(t)) represents the instaneous trajectory error

  % params can be initialized in the initParams function, which is called before the simulation starts
  
  x_des = params.traj(t);
  xd_des = 0;
  xdd_des = 0;
  
  Kp = 17.46;
  Kv = 5.3;
  
%   err =
% 
%    15.0783    9.5465    7.0489
% 
% Correct!
% Enter LDS1R into the submission box.
  
  % error threshold is 15.1, 9.8, 7.9

  % SOLUTION GOES HERE -------------
%   u = xdd_des + params.Kv*(xd_des - xd) + params.Kp*(x_des - x);
  u = xdd_des + Kv*(xd_des - xd) + Kp*(x_des - x);
end