df <- airquality

dim(df)

sapply(df, class)

which(is.na(df))
sum(is.na(df))

df1 <- as.data.frame(df)

for(i in 1:4)
  df1[,i] <- ifelse(is.na(df1[,i]), mean(df1[,i],na.rm = TRUE), df1[,i])

print(df1)

df2 <- na.omit(df)

print(df2)

