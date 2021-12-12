disp("Exo 1: Partiel 2021");

VarWt();
function [] = VarWt()
% ----------------------------------------- 
% Initialisation des variables
        T=3;
        N=100;
        delta_t=T/N;
        Nmc=1000;
        W(1)=0;
        esp=0; var=0;
        esp4=0;
        t=(0:N)*delta_t;
% ----------------------------------------- 

%On veut calculer var(Wt) et Esp(Wt^4) 
%On applique la methode de montecarlos
%On simule Nmc fois selon differentes trajectoire du Mouvement brownien
%Ensuite on calcule la moyenne

for j=1: Nmc
    % boucle pour une trajectoire du mouvement brownien
    for i =1:N 
       W(i+1) = W(i) + sqrt(delta_t)*randn; 
    end
    %On stock la derniere valeur du MB dans un tableau
    last_value(j) = W(N+1);
    esp=esp+last_value(j);
    var=var+last_value(j)^2;
    %De meme pour la puissance 4
    esp4=esp4+last_value(j)^4;
    plot(t,W);

end
%---------------------------------------------
%Calcul de l'esperance et de la variance
esp=esp/Nmc;
var=var/Nmc - esp^2;

%Calcul de l'esperance puissance 4
esp4/Nmc;

%----------------------------------------------
%On affiche les resultats obtenues
disp("esperance : "+esp+" avec fonction mean: "+mean(last_value));
disp("variance : " +var+" avec fonction std: "+std(last_value)^2 + " Tres proche du parametre T=3 donc c'est bon");
disp("esperance de (W)^4: "+ esp4);


end