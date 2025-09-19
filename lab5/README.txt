Requirement 1 worked, requirement 2 is not properly printing the tree structure as an XML.

Modify the code to check if a `/` appears right before `>`, meaning it's a stand-alone tag like `<foo/>`. If detected, don't push it onto the stack because it doesn't need a matching end tag. Instead, just recognize it and continue processing. This prevents unnecessary stack operations while correctly handling self-contained tags.
