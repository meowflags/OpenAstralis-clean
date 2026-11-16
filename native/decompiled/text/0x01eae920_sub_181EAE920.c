// sub_181EAE920
// rva 0x01eae920  size 385  section .text  group text
// window base 0x181eae920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EAE920(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 result; // rax
  unsigned int v8; // ebx
  __int64 v9; // rsi

  result = a3 >> 4;
  if ( (int)a6 < 0 || a4 <= (int)a6 )
  {
    if ( (a3 & 0x10) != 0 )
    {
      MEMORY[0x1828C1C40](a1, a2, a3: v6 + 361300432);
    }
    else
    {
      result = *(_QWORD *)(a5 + 128);
      v8 = a3 >> 5;
      if ( (_DWORD)a2 != 0 )
        v8 += 8;
      if ( result != 0 )
      {
        if ( (_DWORD)a2 != 0 || (v9 = *(_QWORD *)(a5 + 136)) > v8 )
        {
          *(_QWORD *)(result + v8) = a1;
          return result;
        }
        goto LABEL_17;
      }
    }
    MEMORY[0x1828C1C40](a1, a2, a3: v6 + 361300432);
LABEL_17:
    MEMORY[0x1828C1C40](a1, a2: v9, a3: v6 + 361300432);
LABEL_18:
    MEMORY[0x1828C1C40](a1, a2, a3: v6 + 361300432);
    __halt();
  }
  if ( (a3 & 0x10) == 0 )
    goto LABEL_18;
  if ( (unsigned int)a6 <= 5 )
    __asm { jmp     rdx; switch jump }
  return result;
}
