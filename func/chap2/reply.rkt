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

(define (reply-more s)
	(cond 
	[(equal? "hello" (substring s 0 5))
	"hi!"]
	[(equal? "goodbye" (substring s 0 7))
	"bye"]
	[(equal? "?" (substring s (- (string-length s) 1)))
	"I don't know"]
	[else "huh?"]))

(define (extract str)
	(substring str 2 5))
