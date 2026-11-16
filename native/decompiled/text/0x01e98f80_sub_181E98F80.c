// sub_181E98F80
// rva 0x01e98f80  size 486  section .text  group text
// window base 0x181e98f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E98F80(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 result; // rax
  int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+18h] [rbp-40h]
  __int64 v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+28h] [rbp-30h]
  int v22; // [rsp+34h] [rbp-24h]
  __int64 v23; // [rsp+38h] [rbp-20h]
  __int64 v24; // [rsp+40h] [rbp-18h]
  unsigned int v25; // [rsp+48h] [rbp-10h]
  unsigned int v26; // [rsp+4Ch] [rbp-Ch]
  __int64 v27; // [rsp+50h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v18);
    JUMPOUT(0x181E99166LL);
  }
  v20 = a3;
  v27 = a5;
  v19 = a6;
  v26 = a1;
  if ( a5 != 0 )
  {
    v8 = *(_QWORD *)(a5 + 32);
    v24 = v8 + a5;
    v23 = a5 + v8 - ((((v8 - 56) << 9) / 0x201uLL) & 0xFFFFFFFFFFFFFFF8LL);
    sub_181E98AE0(a1: v24, a2: v24, a3, a4: 0, a5, a6: v23, a7: v18, a8: a6, a9: a1);
    v9 = *(_QWORD *)(v27 + 16);
    if ( v9 != 0 )
      result = v27 + v9;
    else
      result = 0;
    v11 = 1;
    while ( 1 )
    {
      a1 = v26;
      a3 = v20;
      if ( result == 0 )
      {
        v25 = v11;
        goto LABEL_12;
      }
      if ( v11 >= 0x10000 )
        break;
      v22 = v11;
      v12 = *(_QWORD *)(result + 32);
      v23 = result + v12 - ((((v12 - 56) << 9) / 0x201uLL) & 0xFFFFFFFFFFFFFFF8LL);
      v24 = result + v12;
      v21 = result;
      sub_181E98AE0(a1: result + v12, a2: result + v12, a3: v20, a4: 0, a5: result, a6: v23, a7: v18, a8: v19, a9: v26);
      v13 = *(_QWORD *)(v21 + 16);
      v11 = v22 + 1;
      if ( v13 != 0 )
        result = v21 + v13;
      else
        result = 0;
    }
    v25 = v11;
  }
  else
  {
    result = 0;
    v25 = 0;
  }
LABEL_12:
  if ( result != 0 )
  {
    v21 = result;
    v14 = MEMORY[0x1820841E0](a1, a2, a3: v20);
    result = MEMORY[0x182084840](a1: v16, a2: v17, a3: v14, a4: v15, a5: v6 + 372583328);
  }
  else
  {
    v21 = 0;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280](a1, a2, a3, a4: v25);
  return result;
}
