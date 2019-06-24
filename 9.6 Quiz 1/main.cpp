bool operator< (const Cents &c1, const Cents &c2) {
    return !(c1 >= c2);
}
 
bool operator<= (const Cents &c1, const Cents &c2) {
    return !(c1 > c2);
}