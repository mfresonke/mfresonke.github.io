package main

import (
	"fmt"
	"net/http"
	"os"
)

func main() {
	portStr := os.Getenv("PORT")
	if portStr == "" {
		panic("PORT env var not defined.")
	}
	http.HandleFunc("/ace", func(w http.ResponseWriter, r *http.Request) {
		fmt.Fprint(w, "Hello ACE!")
	})
	fmt.Println("Server is Listening on Port: ", portStr)
	http.ListenAndServe(":"+portStr, nil)
}
