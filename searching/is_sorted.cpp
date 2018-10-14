template <class ForwardIterator>
bool is_sorted (ForwardIterator first, ForwardIterator last)
{
    if (first==last) return true;
    ForwardIterator next = first;
    while (++next!=last)
    {
        if (*next<*first)     // or, if (comp(*next,*first)) for version (2)
        return false;
        ++first;
    }
    return true;
}
