

#include "Serializer.hpp"



Serializer::Serializer(){}

Serializer::Serializer(const Serializer &obj)
{
    *this = obj;
}

Serializer & Serializer::operator=(const Serializer &obj)
{
    (void)obj;

    return *this;
}

Serializer::~Serializer(){}

uintptr_t Serializer::serialize(int *ptr)
{
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);

    return raw;
}

int *Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<int *>(raw));
}

// uintptr_t serialize(int * ptr)
// {
//     uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);

//     return raw;
// }

