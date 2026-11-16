// sub_1815933A0
// rva 0x015933a0  size 214  section .text  group text
// window base 0x1815933a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815933A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  __int64 result; // rax

  MEMORY[0x182839120](a1, a2, a3: 301999952, a4: 301999952, a5: *(_QWORD *)(a5 + 8), a6: 208);
  if ( a6 != 0 && *(int *)a6 >= 3 )
  {
    v6 = a5;
    *(_DWORD *)(a5 + 16) = *(_DWORD *)(a6 + 32);
    *(_QWORD *)a5 = *(_QWORD *)(a6 + 40);
    *(_DWORD *)(a5 + 20) = *(_DWORD *)(a6 + 48);
  }
  else
  {
    v6 = a5;
    *(_DWORD *)(a5 + 16) = 0;
    *(_QWORD *)a5 = 0;
    *(_DWORD *)(a5 + 20) = 0;
  }
  *(_BYTE *)(v6 + 24) = a6 != 0 && *(int *)a6 >= 5 && *(_BYTE *)(a6 + 54) != 0;
  result = *(_QWORD *)(a6 + 8);
  if ( result != 0 )
  {
    *(_QWORD *)(*(_QWORD *)(v6 + 8) + 40LL) = result;
    result = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(result + 144) = 0;
  }
  return result;
}
