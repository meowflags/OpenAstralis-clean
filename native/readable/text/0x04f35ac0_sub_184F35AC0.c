// sub_4F35AC0
// rva 0x04f35ac0  size 710  section .text  group text
// window base 0x184f35ac0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F35AC0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  char v9; // bl
  unsigned int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 i; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned int v19; // ebx
  unsigned __int64 j; // r8
  unsigned __int64 v21; // rcx
  __int64 result; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // [rsp+0h] [rbp-38h] BYREF
  __int64 v26; // [rsp+8h] [rbp-30h]
  _DWORD *v27; // [rsp+10h] [rbp-28h]
  unsigned int v28; // [rsp+1Ch] [rbp-1Ch]
  __int64 v29; // [rsp+20h] [rbp-18h]
  unsigned int v30; // [rsp+2Ch] [rbp-Ch]
  unsigned int v31; // [rsp+30h] [rbp-8h]
  unsigned int v32; // [rsp+34h] [rbp-4h]

  v27 = (_DWORD *)a3;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v7 + 8) )
  {
    v26 = a5;
    sub_1EB84E0();
  }
  else if ( a5 != v6 )
  {
    v8 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v8 == 0 )
    {
LABEL_34:
      v26 = a5;
      v13 = sub_2771080();
      goto LABEL_35;
    }
    v9 = *(_BYTE *)(a5 + 12);
    v10 = *(_DWORD *)(v6 + 8 * v8 + 8) >> v9;
    if ( v10 < 0x7FFFFFEF )
      v11 = v10 + 16;
    else
      v11 = 0x7FFFFFFF;
    v32 = v11;
    *(_BYTE *)(a3 + 12) = v9;
    v12 = 34082368;
    if ( v9 != 0 )
    {
      v29 = 34082368;
      v31 = v10;
      v30 = v9;
      v26 = a5;
      v13 = sub_50217A0(a1, a2: 34082368, a3: v11);
      if ( (v13 & 0x80000000) == 0 )
      {
        v14 = *(_QWORD *)(v7 + 40);
        v15 = (v13 + 19LL) & 0x1FFFFFFF8LL;
        if ( v15 >= 0x20000 || v14 + v15 > *(_QWORD *)(v7 + 32) )
        {
          v28 = v13;
          v14 = sub_1EAA840(a1, a2: v29, a3: v29, a4: v15, a5: v13);
        }
        else
        {
          v12 = v29;
          *(_QWORD *)(v7 + 40) = v14 + v15;
          *(_QWORD *)v14 = v12;
          *(_DWORD *)(v14 + 8) = v13;
          *(_DWORD *)(v14 + 12) = 0;
          if ( v15 - 16 >= 0x800 )
          {
            v24 = v15 - 16;
            memset((void *)(v14 + 16), 0, v24);
            a1 = v14 + 16 + v24;
          }
          else
          {
            for ( i = 16; v15 > i; i += 8LL )
              *(_QWORD *)(v14 + i) = 0;
          }
        }
        goto LABEL_22;
      }
LABEL_35:
      sub_2770E80(a1, a2: v30, a3: v13, a4: v27, a5: v26);
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
      return sub_4F35DA0();
    }
    v31 = v10;
    v30 = 0;
    v26 = a5;
    v14 = *(_QWORD *)(v7 + 40);
    v17 = v32;
    v18 = (v32 + 19LL) & 0x1FFFFFFF8LL;
    if ( v18 >= 0x20000 || (v17 = v14 + v18, v14 + v18 > *(_QWORD *)(v7 + 32)) )
    {
      v14 = sub_1EAA840(a1, a2: 34082368, a3: 34082368, a4: v17, a5: v32);
    }
    else
    {
      v19 = v32;
      *(_QWORD *)(v7 + 40) = v17;
      *(_QWORD *)v14 = 34082368;
      *(_QWORD *)(v14 + 8) = v19;
      if ( v18 - 16 >= 0x800 )
      {
        memset((void *)(v14 + 16), 0, v18 - 16);
        a1 = v14 + v18;
      }
      else
      {
        for ( j = 16; v18 > j; j += 8LL )
          *(_QWORD *)(v14 + j) = 0;
      }
    }
LABEL_22:
    v21 = (unsigned __int64)v27;
    v27[1] = (unsigned __int64)(v14 - v6) >> 3;
    if ( (*(_DWORD *)v21 & 2) != 0 )
    {
      v23 = (v21 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v23) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v23) >> 9) + 0x38) = 0;
    }
    result = ((__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, __int64))(v5 + *(_QWORD *)(v6 + 8LL * (*(_DWORD *)v21 >> 3) + 184)))(
               a1,
               a2: v12,
               a3: v21,
               a4: v21,
               a5: v26);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
  goto LABEL_34;
}
