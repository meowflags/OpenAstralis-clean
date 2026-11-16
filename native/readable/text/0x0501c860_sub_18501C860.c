// sub_501C860
// rva 0x0501c860  size 336  section .text  group text
// window base 0x18501c860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501C860(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // eax
  signed int v10; // ecx
  __int64 v11; // r8
  signed int i; // r9d
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r8
  int v19; // r9d
  int v20; // ebx
  signed int v21; // ebp
  int v22; // edx
  int v23; // ecx
  int v24; // edi
  int v25; // esi
  int v26; // r8d
  int v27; // r9d
  _QWORD v28[2]; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v29; // [rsp+10h] [rbp-8h]
  unsigned int v30; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)v28 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_501C9C0(a1: v24, a2: v25, a3: v22, a4: v23, a5: v26, a6: v27, a7);
  }
  else
  {
    v9 = a3[2];
    v10 = a3[3];
    v11 = v7 + 8LL * a3[1];
    if ( v10 > (int)v9 )
    {
      v19 = *(unsigned __int16 *)(v11 + (int)(2 * v9) + 12);
      if ( v19 == 10 )
      {
        i = a3[2];
      }
      else if ( v19 == 13 )
      {
        i = a3[2];
      }
      else
      {
        for ( i = v9 + 1; v10 > i; ++i )
        {
          v20 = *(unsigned __int16 *)(v11 + 2 * i + 12);
          if ( v20 == 10 || v20 == 13 )
            goto LABEL_4;
        }
        i = a3[3];
      }
    }
    else
    {
      i = a3[3];
    }
LABEL_4:
    if ( v10 > i )
    {
      v21 = i + 1;
      if ( *(_WORD *)(v11 + 2 * i + 12) == 13 )
      {
        if ( v10 > v21 )
        {
          if ( *(_WORD *)(v11 + 2 * v21 + 12) == 10 )
            v10 = i + 2;
          else
            v10 = i + 1;
        }
        else
        {
          v10 = i + 1;
        }
      }
      else
      {
        v10 = i + 1;
      }
    }
    a3[2] = v10;
    v28[1] = a3;
    v30 = i;
    v29 = v9;
    result = sub_5021B40(a1, a2, a3: v11, a4: i - v9, a5: v9, a6: i - v9);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v30);
  }
  return result;
}
