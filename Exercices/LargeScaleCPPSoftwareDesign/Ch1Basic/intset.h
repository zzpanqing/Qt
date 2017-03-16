#ifndef INTSET_H
#define INTSET_H

class IntSetLink;
class IntSetIter;

class IntSet
{
public:
    // DATA
    IntSetLink *d_root_p; // root of a linked list of integers

    // FRIENDS
    friend intSetIter;

private:
    // NOT IMPLEMENTED
    IntSet(const IntSet&);
        // 禁止 code client 通过拷贝构造 IntSet
    IntSet& operator= (const IntSet&);
        // 禁止将一个 IntSet 赋值给另一个 IntSet
public:
    // 允许创建，销毁和添加 int 到 IntSet,
    // 允许检查关系
    // CREATORS
    IntSet();
        // Create an empty set of integers
    ~IntSet();
        // Destroy this set
    // MANIPULATORS
    void add(int i);
        // Add an integer to this set. If the given integer is
        // already present, this operation has no effect.
    // ACCESSORS
    int isMember(int i) const;
        // Return 1 if integer i is a member of the set
        // and 0 otherwise

};

ostream& operator<< (ostream& o, const IntSet& intSet)
{
    o << "{ ";
    for(intSet.reset(); intSet.isCurrentValid(); intSet.advance()) {
        o << intSet.current(); << ' ';
    }
    return o << ')';
}

int operator ==(const IntSet& left, const IntSet& right){
    IntSetIter lit(left);
    IntSetIter rit(right);
    for(; lit && rit; ++lit, ++rit){
        if(lit() != rit())
            return 0;
    }
    // At least one of lit and rit now evaluates to 0
    return lit == rit;
}

#endif // INTSET_H
