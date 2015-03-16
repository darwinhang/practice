#lang racket

(define pie 3)

(define (piece str)
  (substring str 0 pie))

(piece "key lime")
