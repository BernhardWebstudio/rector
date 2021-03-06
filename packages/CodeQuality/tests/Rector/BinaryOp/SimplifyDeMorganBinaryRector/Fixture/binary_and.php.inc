<?php

namespace Rector\CodeQuality\Tests\Rector\BinaryOp\SimplifyDeMorganBinaryRector\Fixture;

class BinaryAnd
{
    public static function chr_to_decimal(string $char): int
    {
        $code = ord($char[0]);

        if (!($code & 0x80)) {
            return $code;
        }

        return $code;
    }
}
