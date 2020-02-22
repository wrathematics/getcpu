#' getcpu
#' 
#' Determine which CPU the calling thread is running on.
#' 
#' @return An integer.
#' 
#' @useDynLib getcpu R_getcpu
#' @export
getcpu = function()
{
  .Call(R_getcpu)
}
