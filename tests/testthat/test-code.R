test_that("lua51:::open_lua() works", {
  expect_equal(class(lua51:::open_lua()), "externalptr")
})
