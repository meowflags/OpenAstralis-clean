// sub_18501D060
// rva 0x0501d060  size 360  section .text  group text
// window base 0x18501d060: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501D060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned int v10; // eax
  char v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+8h] [rbp-20h]
  unsigned int v13; // [rsp+14h] [rbp-14h]
  unsigned int v14; // [rsp+18h] [rbp-10h]
  unsigned int v15; // [rsp+1Ch] [rbp-Ch]
  unsigned int v16; // [rsp+20h] [rbp-8h]
  unsigned int v17; // [rsp+24h] [rbp-4h]

  v17 = a6;
  v16 = a1;
  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v6 + 8) )
  {
    v15 = a5;
    MEMORY[0x181EB84E0]();
    return v13;
  }
  v12 = a3;
  v15 = a5;
  if ( (_DWORD)a1 != 0 )
  {
    sub_18501CF00(a1, a2, a3: a5, a4, a5: a3, a6, a7: v11);
    a3 = v12;
  }
  v7 = 2 * v15;
  result = *(unsigned __int16 *)(a3 + (int)v7 + 12);
  if ( (unsigned int)result < 0xD800 || (unsigned int)result >= 0xDC00 )
  {
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280](a1, a2, a3, a4: *(unsigned __int16 *)(a3 + (int)v7 + 12), a5: v7, a6: v17);
    return result;
  }
  if ( (int)v17 > (int)(v15 + 1) )
  {
    v9 = v16;
    if ( v16 != 0 )
    {
      v13 = *(unsigned __int16 *)(a3 + (int)v7 + 12);
      v14 = v15 + 1;
      sub_18501CF00(a1: v16, a2, a3: v15 + 1, a4, a5: a3, a6: v17, a7: v11);
      a3 = v12;
    }
    else
    {
      v14 = v15 + 1;
      v13 = result;
    }
    v10 = *(unsigned __int16 *)(a3 + (int)(2 * v14) + 12);
    if ( *(int *)(v6 + 16) <= 0 )
      v10 = MEMORY[0x18277F280](a1: v9, a2, a3, a4: v13, a5: v14);
    if ( v10 < 0xDC00 )
      return v13;
    if ( v10 < 0xE000 )
      return (v13 << 10) + v10 - 56613888;
    return v13;
  }
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280](a1, a2, a3, a4: *(unsigned __int16 *)(a3 + (int)v7 + 12));
  return result;
}
