clc;

disp("Verification du lemme d'ito")
lemmeito();

function [f]= Teta(t,w)
    f=w;
end

function[] = lemmeito()
N=10000;
NMC=10000;
T=1; delta_t=T/N;
W(1) =0;
t=(0:N)*delta_t;

Integrale(1) =0;
Integrale_stoch = 0;


    for i=1:N
        W(i+1) = W(i)+ sqrt(delta_t)*randn;
        Integrale_stoch = Integrale_stoch + Teta(t(i),W(i))*(W(i+1) - W(i)); % Teta(t(i),w(i)) renvoie w(i)
    end

coordonneefinal = W(N+1); % W(T) valeur final du mouvement brownien de la même trajectoire (sinon ça ne marche pas)
partie_droite = (coordonneefinal^2/2) - T/2;
 disp("Integrale stochastiques: "+ Integrale_stoch + " Partie de droite : " +partie_droite);


 for n =1:NMC
     I=0;
    for i=1:N
        W(i+1) = W(i)+ sqrt(delta_t)*randn;
        Integrale_stoch = Integrale_stoch + Teta(t(i),W(i))*(W(i+1) - W(i)); % Teta(t(i),w(i)) renvoie w(i)
    end
    Integrale(n) = I;
 end
disp("esperance : " + mean(Integrale));




end