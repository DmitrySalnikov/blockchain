#include "block.h"

Block::Block() {}

Block::Block ( const uint64_t nounce, const uint64_t hash, const std::string message ) :
    nounce( nounce ), hash( hash ), message( message )
{
    timestamp = std::time(0);
}

Block::Block( const Block &block ) :
    nounce( block.nounce ), timestamp( block.timestamp ), hash( block.hash ), message( block.message )
{

}

Block::~Block()
{

}