// sub_4F3CF60
// rva 0x04f3cf60  size 501  section .text  group text
// window base 0x184f3cf60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F3CF60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r10
  signed __int64 v14; // rbp
  signed __int64 v15; // rbp
  signed __int64 v16; // rdi
  unsigned __int64 v17; // r8
  __int64 v18; // [rsp+0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+10h] [rbp-28h]
  __int64 v20; // [rsp+18h] [rbp-20h]
  int v21; // [rsp+24h] [rbp-14h]
  __int64 v22; // [rsp+28h] [rbp-10h]
  unsigned int v23; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v4 + 8) )
  {
LABEL_28:
    v20 = a3;
    sub_1EB84E0();
    goto LABEL_29;
  }
  v5 = *(unsigned int *)(a3 + 4);
  result = (unsigned int)(*(_DWORD *)(a3 + 8) << *(_BYTE *)(a3 + 12));
  if ( (_DWORD)v5 == 0 )
  {
LABEL_29:
    sub_2771080();
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
    return sub_4F3D160();
  }
  v7 = *(unsigned int *)(v3 + 8 * v5 + 8);
  if ( (int)v7 > (int)result )
  {
    v8 = v3 + 8 * v5;
    if ( (int)result >= 0 )
    {
      v9 = *(_QWORD *)(v4 + 40);
      v10 = (unsigned int)result;
      v11 = ((unsigned int)result + 19LL) & 0x1FFFFFFF8LL;
      if ( v11 >= 0x20000 || (v11 += v9, v11 > *(_QWORD *)(v4 + 32)) )
      {
        v22 = (unsigned int)result;
        v19 = v8;
        v21 = v7;
        v20 = a3;
        v23 = result;
        v9 = sub_1EAA840(a1: v8, a2: v11, a3: 34082368, a4: v7, a5: (unsigned int)result);
        v10 = v22;
        v8 = v19;
        LODWORD(v7) = v21;
        result = v23;
        a3 = v20;
      }
      else
      {
        *(_QWORD *)(v4 + 40) = v11;
        *(_QWORD *)v9 = 34082368;
        *(_DWORD *)(v9 + 8) = result;
      }
      if ( (unsigned int)result < (unsigned int)v7 )
        JUMPOUT(0x309E52FF0LL);
      if ( (unsigned int)result <= (unsigned int)v7 )
        JUMPOUT(0x309E52FFBLL);
      if ( (_DWORD)v7 != 0 )
      {
        v12 = v8 + 12;
        v13 = 0;
        do
        {
          *(_BYTE *)(v9 + 12 + v13) = *(_BYTE *)(v12 + v13);
          ++v13;
        }
        while ( v13 <= (unsigned int)v7 - 1LL );
      }
      v14 = v10 - (unsigned int)v7;
      if ( v14 >= 2048 )
      {
        memset((void *)(v9 + (unsigned int)v7 + 12), 0, v14);
        result = (unsigned int)result;
      }
      else if ( (unsigned int)result > (unsigned int)v7 )
      {
        v15 = v14 - 1;
        v16 = 0;
        do
          *(_BYTE *)(v9 + (unsigned int)v7 + 12 + v16++) = 0;
        while ( v16 <= v15 );
      }
      *(_DWORD *)(a3 + 4) = (unsigned __int64)(v9 - v3) >> 3;
      if ( (*(_DWORD *)a3 & 2) != 0 )
      {
        v17 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) != 0 )
          *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) = 0;
      }
      goto LABEL_4;
    }
    v23 = *(_DWORD *)(a3 + 8) << *(_BYTE *)(a3 + 12);
    v20 = a3;
    sub_579A560(a1: v8, a2, a3: v8, a4: v7, a5: (unsigned int)result);
    goto LABEL_28;
  }
LABEL_4:
  if ( *(int *)(v4 + 16) <= 0 )
  {
    v23 = result;
    v20 = a3;
    return sub_277F280();
  }
  return result;
}
