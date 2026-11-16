// sub_18501D280
// rva 0x0501d280  size 353  section .text  group text
// window base 0x18501d280: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501D280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned int v9; // eax
  char v10; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+10h] [rbp-18h]
  unsigned int v12; // [rsp+18h] [rbp-10h]
  unsigned int v13; // [rsp+1Ch] [rbp-Ch]
  int v14; // [rsp+20h] [rbp-8h]
  unsigned int v15; // [rsp+24h] [rbp-4h]

  v15 = a6;
  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    return v12;
  }
  v11 = a3;
  if ( (_DWORD)a6 != 0 )
  {
    v13 = a5;
    v14 = a5 - 1;
    sub_18501CF00(a1, a2, a3: a5 - 1, a4: a3, a5: a3, a6, a7: v10);
    a3 = v11;
  }
  else
  {
    v14 = a5 - 1;
    v13 = a5;
  }
  result = *(unsigned __int16 *)(a3 + 2 * v14 + 12);
  if ( (unsigned int)result < 0xDC00 || (unsigned int)result >= 0xE000 )
  {
    v12 = *(unsigned __int16 *)(a3 + 2 * v14 + 12);
    if ( *(int *)(v6 + 16) > 0 )
      return result;
    return MEMORY[0x18277F280](a1, a2, a3: v11);
  }
  if ( v14 >= 1 )
  {
    v8 = v13 - 2;
    if ( v15 != 0 )
    {
      v12 = *(unsigned __int16 *)(a3 + 2 * v14 + 12);
      v13 -= 2;
      sub_18501CF00(a1, a2, a3: v8, a4: v8, a5: a3, a6: v15, a7: v10);
      a3 = v11;
    }
    else
    {
      v13 -= 2;
      v12 = result;
    }
    v9 = *(unsigned __int16 *)(a3 + (int)(2 * v13) + 12);
    if ( *(int *)(v6 + 16) <= 0 )
      v9 = MEMORY[0x18277F280](a1, a2, a3, a4: v13);
    if ( v9 < 0xD800 )
      return v12;
    if ( v9 < 0xDC00 )
      return v12 + (v9 << 10) - 56613888;
    return v12;
  }
  v12 = *(unsigned __int16 *)(a3 + 2 * v14 + 12);
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280](a1, a2, a3: v11);
  return result;
}
