#include <eosiolib/eosio.hpp>
#include <eosiolib/print.hpp>
using namespace eosio;

class [[eosio::contract("hashhubdemo1")]] hello : public eosio::contract {
  public:
      using contract::contract;

      [[eosio::action]]
      void hi( name user ) {
         print( "Hello, ", name{user} );
         require_recipient( user );
      }
};

EOSIO_DISPATCH( hello, (hi) )
