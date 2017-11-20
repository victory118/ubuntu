clc
close all
clear all

syms g mr ir d r th(t) phi(t) u

% p = r*[th + phi; 0] + d*[sin(phi); cos(phi)];

x = r*(th + phi) + d*sin(phi);
y = d*cos(phi);
dx = diff(x,t);
dy = diff(y,t);

T = 1/2*mr*(dx*dx + dy*dy) + 1/2*ir*diff(phi,t)^2;
V = mr*g*d*cos(phi);

L = T - V;

Dth = functionalDerivative(L,th) == u;
Dphi = functionalDerivative(L,phi) == 0;

thddot_iso = isolate(Dth, diff(th, t, t));
phiddot = subs(Dphi, diff(th, t, t), rhs(thddot_iso));
phiddot_iso = isolate(phiddot, diff(phi, t, t));

syms dth dphi ddphi

phiddot_iso1 = subs(phiddot_iso, [diff(th, t), diff(phi, t)], [dth, dphi]);
thddot_iso1 = subs(thddot_iso, [diff(phi, t, t), diff(th, t), diff(phi, t)], [ddphi, dth, dphi]);


