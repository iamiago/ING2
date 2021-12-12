disp("Exo 5 partiel");
oscillateur();
function[] = oscillateur()
T=15;
r=0.1;
sigma=1.5;
alpha=0.3;
beta=0.5;
beta=0.5;
m0=10;
p0=10;
N=1000;
delta_t=T/N;

W(1)=0;
M(1)=m0;
P(1)=p0;
varQuadraP(1)=0;
varQuadraM(1)=0;


    for i=1:N
        W(i+1)=W(i)+sqrt(delta_t)*randn;
        M(i+1)=M(i)+P(i)*delta_t;
        P(i+1)=P(i)-alpha*P(i)*delta_t-beta*M(i)*delta_t+sigma*(W(i+1)-W(i));
        varQuadraP(i+1)=varQuadraP(i)+(P(i+1)-P(i))^2;
        varQuadraM(i+1)=varQuadraM(i) + (M(i+1)-M(i));
    end
    
    t=linspace(0,T,N+1);
%     plot(t,P);
%     hold on;
%     plot(t,M);
%     hold on;
%     plot(P,M);
    plot(t,varQuadraP);
    hold on;
    plot(t,varQuadraM);
    
end