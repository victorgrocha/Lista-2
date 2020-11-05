
#include <array>   
#include <iomanip>
#include <iostream>
#include <numeric>
#include <tuple>

int main()
{
    std::array<double, 5> notas;
    std::generate(notas.begin(), notas.end(), [] {
        double nota;
        std::cin >> nota;
        return nota;
    });

    decltype(notas)::iterator menor_nota, maior_nota;
    std::tie(menor_nota, maior_nota) = std::minmax_element(notas.begin(), notas.end());

    std::iter_swap(menor_nota, notas.end() - 2);
    std::iter_swap(maior_nota, notas.end() - 1);

    double soma_notas = std::accumulate(notas.begin(), notas.end() - 2, 0.0);

    std::cout << std::fixed << std::setprecision(1) << soma_notas;

    return 0;
}
