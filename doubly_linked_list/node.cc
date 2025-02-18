
#include "node.hh"

Node::Node(int v)
    : val_{ v }
    , next_{}
    , prev_{}
{}

int Node::val_get() const
{
    return val_;
}

void Node::val_set(int val)
{
    val_ = val;
}

std::shared_ptr<Node> Node::next_get() const
{
    return next_;
}

void Node::next_set(std::shared_ptr<Node> next)
{
    next_ = next;
}

std::shared_ptr<Node> Node::prev_get() const
{
    auto p = prev_.lock();
    return p;
}

void Node::prev_set(std::shared_ptr<Node> prev)
{
    prev_ = prev;
}
