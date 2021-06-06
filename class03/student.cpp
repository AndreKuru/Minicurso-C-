#include "student.h"

namespace school {

int Student::years_enrolled(int actual_year) {
    return actual_year - year;
}

double Student::average() {
    return (note1 + note2 + note3) / 3;
}

}
