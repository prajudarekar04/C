let args = process.argv;
for(let i = 1; i < args.length; i++)
{
    console.log("Hello", args[i]);
}
console.log(process.argv);