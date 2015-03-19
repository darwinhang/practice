#lang racket

(define (twice f v)
	(f (f v)))

(define (make-add-suffix s2)
	(lambda (s) (string-append s s2)))

(define louder (make-add-suffix "!"))

(twice louder "hooray")
