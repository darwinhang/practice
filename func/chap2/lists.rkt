#lang racket

(define what (list "red" "green" "blue"))

(length what)

(list-ref what 0)

(append what (list "yellow"))

(member "red" what)

(member "orange" what)


; list loops
(map sqrt (list 1 4 9 16))

(map (lambda (i)
	(string-append i "!"))
     (list "peanuts" "popcorn" "crackerjack"))

(andmap string? (list "a" "b" "c"))

(filter string? (list "a" 1 2 3))

; Note: a Racket list is a linked list
(first (list 1 2 3)) ;returns 1
(rest what) ; returns '("green" "blue")

; to create a new node:
(define ouch empty)
(cons "head" (cons "end" ouch))

(empty? empty)

(cons? (list "whatup"))

