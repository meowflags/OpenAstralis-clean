// sub_1EBDB40
// rva 0x01ebdb40  size 2143  section .text  group text
// window base 0x181ebdb40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1EBDB40(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // [rsp+0h] [rbp-48h] BYREF

  if ( (unsigned __int64)&v7 > *(_QWORD *)(v3 + 8) )
  {
    v4 = *(unsigned int *)(v2 + 376658380);
    if ( (_DWORD)v4 != 0 && v3 != *(_QWORD *)(v2 + 376351704) )
    {
      if ( *(_QWORD *)(v2 + 8 * v4 + 16) != 0 )
        JUMPOUT(0x181EBE073LL);
      if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v2 + 8 * v4 + 16), 0, *(_QWORD *)(v3 + 64)) == 0 )
      {
        if ( *(_BYTE *)(v2 + 376242779) != 0 )
        {
          v5 = *(unsigned int *)(v2 + 376658380);
          if ( *(_DWORD *)(v2 + 8 * v5 + 28) == 1 )
          {
            *(_QWORD *)(v2 + 8 * v5 + 16) = 0;
            __faststorefence();
            JUMPOUT(0x181EBDFE5LL);
          }
          JUMPOUT(0x181EBE0B9LL);
        }
        if ( sub_1E9AA80(a1, a2) != v2 )
        {
          *(_BYTE *)(v2 + 376242779) = 1;
          v6 = *(unsigned int *)(v2 + 376658380);
          if ( *(_DWORD *)(v2 + 8 * v6 + 28) == 1 )
          {
            *(_QWORD *)(v2 + 8 * v6 + 16) = 0;
            __faststorefence();
            JUMPOUT(0x181EBE04DLL);
          }
          JUMPOUT(0x181EBE0EDLL);
        }
        JUMPOUT(0x181EBE005LL);
      }
    }
    JUMPOUT(0x181EBE078LL);
  }
  JUMPOUT(0x181EBE2BFLL);
}
