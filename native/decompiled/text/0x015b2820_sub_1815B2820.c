// sub_1815B2820
// rva 0x015b2820  size 3849  section .text  group text
// window base 0x1815b2820: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815B2820(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned __int64 v9; // [rsp+30h] [rbp-18h]

  v9 = a5 & 0xFFFFFFFFFFFFFF00LL;
  result = sub_1815AFB80(
             a1,
             a2,
             a3: *(_QWORD *)(a3 + 56),
             a4: *(unsigned int *)(a3 + 208),
             a5: (unsigned __int64)a5 >> 8,
             a6: *(_DWORD *)(a3 + 208));
  v6 = *(_QWORD *)(a3 + 48);
  v7 = *(unsigned __int8 *)(v6 + (int)result + 12);
  if ( (unsigned int)v7 <= 0x4F )
    __asm { jmp     rbp; switch jump }
  if ( v9 != a5 )
  {
    if ( *(_BYTE *)(v6 + (int)result + 1 + 12) != 0 )
      v8 = *(unsigned __int8 *)(v6 + (int)result + 1 + 12) + v9;
    else
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v8 <= a5 )
      JUMPOUT(0x302B3EA15LL);
    return -1;
  }
  return result;
}
