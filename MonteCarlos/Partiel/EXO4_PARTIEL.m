Modele();

function[]=Modele()
T=0.5;
N=100;
delta_t=T/N;
r0=0.1;
alpha=0.2;
beta=0.1;
omega=0.3;
sigma=0.5;
r(1)=r0;
Nmc=1000;
W(1)=0;
s0=10;
S(1)=s0;
cpt=0;

for k=1:Nmc
    
   for i=1:N
       W(i+1)=W(i)+sqrt(delta_t)*randn;
       r(i+1)=r(i)+(alpha-beta*r(i)*delta_t+omega*sqrt(r(i))*(W(i+1)-W(i)));
       S(i+1)=S(i) + S(i)*(r(i)*delta_t + sigma*(W(i+1)-W(i)));
   end
   
   if(S(N+1) < 500)
       cpt=cpt+1;
   end
   
   last_value(k)=r(N+1);
   plot(r);
    plot(S);
   hold on;
   
end

densitegraph(0,0.04,last_value);
disp("proba : "+cpt/Nmc);

end

function[proba,X] = densite_empirique(Y,a,delta)
    
    NMC=length(Y);
    Nx=length(Y);
    for i=1:Nx
       X(i)= a+delta*(i-1);       
       counter=0;      
       for n=1:NMC          
          if (Y(n)<= X(i)+delta && Y(n)>X(i) )              
              counter=counter+1;
          end
       end       
       proba(i) = counter/(NMC);       
    end
end

function [] = densitegraph(a,delta,X)

[P,x]=densite_empirique(X,a,delta);
figure;
plot(x,P,'ro','MarkerSize',2,'MarkerFaceColor', 'r' );
xlabel 'x'
ylabel 'f_X(x)'
title 'Fonctions de densité '
end

function[P,x]=fct_repartition(X,a,delta)
Nx=length(X);
    for i=1:Nx
       x(i)=a+delta*(i-1);
       count=0;
       for n=1:length(X)
           if(X(n) <= x(i))
                count=count+1;
           end
       end
       P(i) = count/length(X);
    end
    
end

function[] = repartitiongraphe(a,delta,X)
tic;
[P,x]=fct_repartition(X,a,delta);
figure;
plot(x,P,'ro','MarkerSize',4,'MarkerFaceColor', 'r' );
xlabel 'x'
ylabel 'F_X(x)'
title 'Fonction de repartition emperique '
disp(toc);% 'LineWidth',1,

end