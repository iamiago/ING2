function [P,M]=Portefeuille()
T=15;
sigma=1.5;
alpha=0.3;
beta=0.5;
M0=10;
P0=10;
N=1000;
M(1)=M0;
P(1)=P0;
variation_M(1)=0;
variation_P(1)=0;
N=100;
deltat=T/N;
t=(0:N)*deltat;
for i=1:N
    g=randn;
    P(i+1)=P(i)-alpha*P(i)*deltat-beta*M(i)*deltat+sigma*sqrt(deltat)*g;
    M(i+1)=M(i)+P(i)*deltat;
    variation_M(i+1)=variation_M(i)+(M(i+1)-M(i))^2;
    variation_P(i+1)=variation_P(i)+(P(i+1)-P(i))^2;
end
%plot(t,variation_M,'LineWidth',2)
%title 'Variation de M'
plot(t,variation_P,'LineWidth',2)
title 'Variation de P'
end