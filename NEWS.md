## pinbasic v0.2.1.9000 

### New Functions

* `posterior`: calculates posterior probabilities for trading days' conditions
* `ggplot.posterior`: Method for `ggplot` function for handling objects with class 'posterior' (Results from `posterior` function)

### Changes

* `pin_confint`: using `iter` function from `iterators` package to iterate over list of simulated datasets if executed in parallel 
                 which gains little speed-up in execution time
* `qpin_plot` changed to `ggplot.qpin`: Method for `ggplot` function for handling objects with class 'qpin' (Results from `qpin` function)

### Fixes

* fixed missing convergence code in optimization routines if `num_best_res = 1` 

## pinbasic v0.2.0 (Release Date: 2016-12-02)

### New Functions

* `simulateBS` for simulating daily buys and sells data
* `pin_confint`: computes confidence intervals for the probability of informed trading 

### Changes

* `pin_est_core`, `pin_est` and `qpin` gained two new arguments: `confint` and `ci_control` 
* updated plotting structure for `qpin_plot`, facets are now grouped by probability parameters, 
  intensity parameters and the probability of informed trading
* `initial_vals` together with `method = "HAC_Ref"` now returns a number of sets of initial values depending 
  on `num_clust` argument, not only one set
* Vignette was added
    

## pinbasic v0.1.0 (Release Date: 2016-10-25)

* initial release