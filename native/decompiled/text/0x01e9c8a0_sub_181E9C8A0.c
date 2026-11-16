// sub_181E9C8A0
// rva 0x01e9c8a0  size 974  section .text  group text
// window base 0x181e9c8a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_181E9C8A0(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14

  if ( a3 != v5 && a5 != v5 )
  {
    if ( a3 != v5 )
    {
      if ( a5 != v5 )
      {
        if ( a3 != v5 )
        {
          if ( a1 != 0 )
            JUMPOUT(0x181E9CB5ELL);
          JUMPOUT(0x181E9CB0ELL);
        }
        JUMPOUT(0x303D268DBLL);
      }
      JUMPOUT(0x303D268CCLL);
    }
    JUMPOUT(0x303D268BDLL);
  }
}
