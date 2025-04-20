.macro glabel name, visibility=global
.\visibility \name
.type \name, @function
\name:
.endm

.macro dlabel name, visibility=global
.\visibility \name
.type \name, @object
\name:
.endm
