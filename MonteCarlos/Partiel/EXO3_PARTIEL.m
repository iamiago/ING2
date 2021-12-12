disp("Exo 3 partiel");

Actif();

function[] =  Actif()
% ----------------------------------------- 
% Initialisation des variables
        T=0.5;
        r0=0.3;
        sig0=0.5;
        s0=10;
        N=100;
        delta_t=T/N;
        Nmc = 1000;
        W(1)=0;
        S(1)=s0;
        r(1)=0;
        sig(1)=0;
% t est le vecteur qui discretise l'intervale [0,T] en N parties
        t=linspace(0,T,N+1);% ou t=(0:N)*delta_t;
%Ces tableau vont servir pour stocker les differents integrales
%Dans la methode de montecarlos
        Int(1)=0;
        Int2(1)=0;
% ----------------------------------------- 
%Fonctions necessaires pour le modele black and scholes généralisé
    function[t]=rate(k)
        t=0.3*((k^2)/(0.5)^2);
    end

    function[t]=sigma(k)
       t=0.5*(k/0.5);
    end
%-------------------------------------------

for k=1:Nmc
    
    for i=1:N
        W(i+1)=W(i)+sqrt(delta_t)*randn;
        S(i+1)=S(i) + S(i)*(rate(t(i))*delta_t + (sigma(t(i))*(W(i+1)-W(i))));
        % c'est bon
       % S(i+1)=S(i)*(1+rate(t(i))*delta_t + (sigma(t(i))*(W(i+1)-W(i))));
       
       
       %c'est pas bon
       %S(i+1)=S(i) + S(i)*rate(t(i))*delta_t + (sigma(t(i))*(W(i+1)-W(i)));
       % S(i+1)=S(i)+S(i)*rate(i)*delta_t + (sigma(i)*(W(i+1)-W(i))); c'est
       % faut car i=1 apres i=2
       %alors qu'on veut t(i) qui est une discretisation de l'intervale
    end
%     plot(W);
%     hold on;
    plot(t, S);
    hold on;
    
end


end