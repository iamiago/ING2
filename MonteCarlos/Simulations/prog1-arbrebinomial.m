
disp("Modèle arbre binomial");
trajectoire();
function[] = trajectoire()
r=0.1;
sigma=0.5;
T=0.5;
N=20;
delta_t=T/N;
d=exp(-sigma*sqrt(delta_t));
u=exp(sigma*sqrt(delta_t));
p=(exp(r*delta_t) -d)/(u-d);
S0=50;

disp("Parametres: ");
disp("u: " + u);
disp("d: " + d);
disp("p: " + p);
    
actif=ones(N);
actif(1) = S0;
for n=1:N
    if rand() < p
        actif(n+1) = u*actif(n);
    else
        actif(n+1) = d*actif(n);
    end
    
end
S=ones(N+1);
S(1)=S0;
for n=1:N+1
    for i=1:n
        S(n,i) = S0*u^(i-1)*d^(n-i);
    end
end

plot(actif,'--');
xlabel("N");
ylabel("valeur de l'actif(n)");
hold on
plot(S,'*');

end