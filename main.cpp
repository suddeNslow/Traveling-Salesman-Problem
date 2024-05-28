#include "TSP.h"
#include <chrono>   
void bfs(TSP& tsp);
void ucs(TSP& tsp);
void a_star(TSP& tsp);

int main() {
    TSP tsp(10);
    tsp.cities = {
        {0, "B"},
        {1, "T"},
        {2, "C"},
        {3, "S"},
        {4, "I"},
        {5, "V"},
        {6, "H"},
        {7, "F"},
        {8, "O"},
        {9, "D"}
    };

tsp.addDistance(0, 1, 153);
tsp.addDistance(0, 2, 312);
tsp.addDistance(0, 3, 459);
tsp.addDistance(0, 4, 606);
tsp.addDistance(0, 5, 747);
tsp.addDistance(0, 6, 903);
tsp.addDistance(0, 7, 1056);
tsp.addDistance(0, 8, 1211);
tsp.addDistance(0, 9, 1365);
tsp.addDistance(1, 2, 178);
tsp.addDistance(1, 3, 329);
tsp.addDistance(1, 4, 477);
tsp.addDistance(1, 5, 620);
tsp.addDistance(1, 6, 779);
tsp.addDistance(1, 7, 922);
tsp.addDistance(1, 8, 1079);
tsp.addDistance(1, 9, 1227);
tsp.addDistance(2, 3, 245);
tsp.addDistance(2, 4, 395);
tsp.addDistance(2, 5, 537);
tsp.addDistance(2, 6, 692);
tsp.addDistance(2, 7, 835);
tsp.addDistance(2, 8, 990);
tsp.addDistance(2, 9, 1136);
tsp.addDistance(3, 4, 264);
tsp.addDistance(3, 5, 419);
tsp.addDistance(3, 6, 573);
tsp.addDistance(3, 7, 718);
tsp.addDistance(3, 8, 877);
tsp.addDistance(3, 9, 1022);
tsp.addDistance(4, 5, 280);
tsp.addDistance(4, 6, 438);
tsp.addDistance(4, 7, 587);
tsp.addDistance(4, 8, 732);
tsp.addDistance(4, 9, 883);
tsp.addDistance(5, 6, 340);
tsp.addDistance(5, 7, 491);
tsp.addDistance(5, 8, 643);
tsp.addDistance(5, 9, 797);
tsp.addDistance(6, 7, 368);
tsp.addDistance(6, 8, 524);
tsp.addDistance(6, 9, 673);
tsp.addDistance(7, 8, 421);
tsp.addDistance(7, 9, 569);
tsp.addDistance(8, 9, 323);

    auto start = chrono::high_resolution_clock::now();
    a_star(tsp);
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::seconds>(end - start).count();
    cout << "A* Execution time: " << duration << " seconds" << endl;

    start = chrono::high_resolution_clock::now();
    ucs(tsp);
    end = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::seconds>(end - start).count();
    cout << "UCS Execution time: " << duration << " seconds" << endl;

    start = chrono::high_resolution_clock::now();
    bfs(tsp);
    end = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::seconds>(end - start).count();
    cout << "BFS Execution time: " << duration << " seconds" << endl;
    return 0;
}
