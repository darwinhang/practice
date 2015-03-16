#lang racket

(define (reply s)
	(if (equal? "hello" (substring s 0 5))
		"hi!"
		"huh?"))

(define (reply-string s)
	(if (if (string? s)
		(equal? "hello" (substring 0 5))
		#f)
	"hi!"
	"huh?"))

(define (reply-better s)
	(if (and (string? s)
		(>= (string-length s) 5 )
		(equal? "hello" (substring s 0 5)))
	"hi!"
	"huh?"))

(define (extract str)
	(substring str 2 5))
