function qdd = eom(params, th, phi, dth, dphi, u)
  % This is the starter file for the week5 assignment

  % Provided params are
  % params.g: gravitational constant
  % params.mr: mass of the "rod"
  % params.ir: rotational inertia of the rod
  % params.d: distance of rod CoM from the wheel axis
  % params.r: wheel radius
  
  g = params.g;
  mr = params.mr;
  ir = params.ir;
  d = params.d;
  r = params.r;

  % Provided states are:
  % th: wheel angle (relative to body)
  % phi: body pitch
  % dth, dphi: time-derivatives of above
  % u: torque applied at the wheel

  qdd = [0;0];
  % THE STUDENT WILL FILL THIS OUT
  t = 1;
  phiddot =  (u + (d*cos(phi(t))*(- d*mr*r*sin(phi(t))*dphi^2 + u))/r + d*g*mr*sin(phi(t)))/(ir + mr*r^2 - mr*r*(r + d*cos(phi(t))) + d^2*mr*cos(phi(t))^2 + d^2*mr*sin(phi(t))^2 - d*mr*cos(phi(t))*(r + d*cos(phi(t))) + 2*d*mr*r*cos(phi(t)));
  thddot = -(u + mr*r*(- d*sin(phi(t))*dphi^2 + phiddot*r + d*phiddot*cos(phi(t))))/(mr*r^2);
  qdd = [thddot; phiddot];
end