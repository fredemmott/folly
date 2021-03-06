// This file is @generated by thens.rb. Do not edit directly.

#include <folly/futures/test/Thens.h>

TEST(Future, thenVariants) {
  SomeClass anObject;
  folly::Executor* anExecutor;

  {Future<B> f = someFuture<A>().then(&aFunction<Future<B>, Try<A>&&>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<Future<B>, Try<A>&&>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<Future<B>, Try<A>&&>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<Future<B>, Try<A>&&>());}
  {Future<B> f = someFuture<A>().then([&](Try<A>&&){return someFuture<B>();});}
  {Future<B> f = someFuture<A>().then(&aFunction<Future<B>, Try<A> const&>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<Future<B>, Try<A> const&>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<Future<B>, Try<A> const&>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<Future<B>, Try<A> const&>());}
  {Future<B> f = someFuture<A>().then([&](Try<A> const&){return someFuture<B>();});}
  {Future<B> f = someFuture<A>().then(&aFunction<Future<B>, Try<A>>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<Future<B>, Try<A>>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<Future<B>, Try<A>>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<Future<B>, Try<A>>());}
  {Future<B> f = someFuture<A>().then([&](Try<A>){return someFuture<B>();});}
  {Future<B> f = someFuture<A>().then(&aFunction<Future<B>, Try<A>&>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<Future<B>, Try<A>&>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<Future<B>, Try<A>&>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<Future<B>, Try<A>&>());}
  {Future<B> f = someFuture<A>().then([&](Try<A>&){return someFuture<B>();});}
  {Future<B> f = someFuture<A>().then(&aFunction<Future<B>, A&&>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<Future<B>, A&&>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<Future<B>, A&&>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<Future<B>, A&&>());}
  {Future<B> f = someFuture<A>().then([&](A&&){return someFuture<B>();});}
  {Future<B> f = someFuture<A>().then(&aFunction<Future<B>, A const&>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<Future<B>, A const&>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<Future<B>, A const&>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<Future<B>, A const&>());}
  {Future<B> f = someFuture<A>().then([&](A const&){return someFuture<B>();});}
  {Future<B> f = someFuture<A>().then(&aFunction<Future<B>, A>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<Future<B>, A>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<Future<B>, A>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<Future<B>, A>());}
  {Future<B> f = someFuture<A>().then([&](A){return someFuture<B>();});}
  {Future<B> f = someFuture<A>().then(&aFunction<Future<B>, A&>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<Future<B>, A&>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<Future<B>, A&>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<Future<B>, A&>());}
  {Future<B> f = someFuture<A>().then([&](A&){return someFuture<B>();});}
  {Future<B> f = someFuture<A>().then([&](){return someFuture<B>();});}
  {Future<B> f = someFuture<A>().then(&aFunction<B, Try<A>&&>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<B, Try<A>&&>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<B, Try<A>&&>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<B, Try<A>&&>());}
  {Future<B> f = someFuture<A>().then([&](Try<A>&&){return B();});}
  {Future<B> f = someFuture<A>().then(&aFunction<B, Try<A> const&>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<B, Try<A> const&>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<B, Try<A> const&>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<B, Try<A> const&>());}
  {Future<B> f = someFuture<A>().then([&](Try<A> const&){return B();});}
  {Future<B> f = someFuture<A>().then(&aFunction<B, Try<A>>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<B, Try<A>>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<B, Try<A>>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<B, Try<A>>());}
  {Future<B> f = someFuture<A>().then([&](Try<A>){return B();});}
  {Future<B> f = someFuture<A>().then(&aFunction<B, Try<A>&>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<B, Try<A>&>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<B, Try<A>&>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<B, Try<A>&>());}
  {Future<B> f = someFuture<A>().then([&](Try<A>&){return B();});}
  {Future<B> f = someFuture<A>().then(&aFunction<B, A&&>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<B, A&&>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<B, A&&>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<B, A&&>());}
  {Future<B> f = someFuture<A>().then([&](A&&){return B();});}
  {Future<B> f = someFuture<A>().then(&aFunction<B, A const&>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<B, A const&>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<B, A const&>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<B, A const&>());}
  {Future<B> f = someFuture<A>().then([&](A const&){return B();});}
  {Future<B> f = someFuture<A>().then(&aFunction<B, A>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<B, A>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<B, A>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<B, A>());}
  {Future<B> f = someFuture<A>().then([&](A){return B();});}
  {Future<B> f = someFuture<A>().then(&aFunction<B, A&>);}
  {Future<B> f = someFuture<A>().then(&SomeClass::aStaticMethod<B, A&>);}
  {Future<B> f = someFuture<A>().then(&anObject, &SomeClass::aMethod<B, A&>);}
  {Future<B> f = someFuture<A>().then(aStdFunction<B, A&>());}
  {Future<B> f = someFuture<A>().then([&](A&){return B();});}
  {Future<B> f = someFuture<A>().then([&](){return B();});}
}

