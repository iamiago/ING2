disp("Exo 2 du partiel");
%IntStochastique();
Stoch();

function[] = IntStochastique()
% ----------------------------------------- 
% Initialisation des variables
            T=3;
            N=100;
            delta_t=T/N;
            Nmc = 1000;
            W(1)=0;
            I1=0;
            I2=0;
            esp=0;
% --------------------------------------

for i =1:N % Boucle pour simuler une trajectoire du mouvement brownien
   W(i+1)=W(i)+sqrt(delta_t)*randn;  
   I1=I1+(W(i)^2)*(W(i+1)-W(i)); % integrale au carré
   I2=I2+W(i)*(delta_t);% integrale 
end
I1 = I1; % integrale de gauche
I2=W(N+1)^3/3 - I2; % Integrale de droite
   


disp("Integrale 1: "+I1);
disp("Integrale 2: "+I2);
disp("Difference :"+abs(I1-I2));
end

function[] = Stoch()
% ----------------------------------------- 
% Initialisation des variables
        T=3;
        N=100;
        delta_t=T/N;
        Nmc = 1000;
        W(1)=0;
        esp=0;
        Istoch1(1)=0;
        Istoch2(1)=0;
% ----------------------------------------- 

    %On veut montreur que Istoch1=Istoch2
 %On applique la methode de montecarlos
 %On simule Nmc fois différentes integrales
 %Ensuite on calcule la moyenne
for k=1:Nmc % Boucle de monte carlos 
    I1=0;
    I2=0;
    %Boucle pour une trajectoire du mouvement brownien
    %Et pour calculer les integrales selon la même trajectoire du MB.
    for i =1:N 
       W(i+1)=W(i)+sqrt(delta_t)*randn;  
       I1=I1+(W(i)^2)*(W(i+1)-W(i));
       I2=I2+W(i)*(delta_t);
    end

    Istoch1(k)=I1;%On stock chaque integrale simulée dans une tableau( membre de gauche )
    Istoch2(k)=W(N+1)^3/3 - I2; %On stock chaque integrale simulée dans une tableau	(mebre de droite)
end
   
%------------------------------------------------
%On affiche les resultats obtenus
disp("Integrale 1:" + mean(Istoch1)); 
disp("Integrale 2:" + mean(Istoch2));
disp("Difference :"+abs( mean(Istoch1) - mean(Istoch2)));
%-------------------------------------------------
end
