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
N=100;
deltat=T/N;
Nmc=1000;
t=(0:N)*deltat;
for j=1:Nmc
for i=1:N
    g=randn;
    P(i+1)=P(i)-alpha*P(i)*deltat-beta*M(i)*deltat+sigma*sqrt(deltat)*g;
    M(i+1)=M(i)+P(i)*deltat;
end
    hold on;
    plot(M,P,'LineWidth',1)
    xlabel 'Processus M_t'
    ylabel 'Processus P_t'
    title 'Diagramme de phase'
    %hold on;
    %plot(t,P,'LineWidth',1)
    %xlabel 't_n'
    %ylabel 'Processus M_t'
    %title 'Simulation du premier portefeuille P'
    %hold on;
    %plot(t,M,'LineWidth',1)
    %xlabel 't_n'
    %ylabel 'Processus M_t'
    %title 'Simulation du second portefeuille M'
end


end