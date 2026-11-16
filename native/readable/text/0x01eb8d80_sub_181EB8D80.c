// sub_1EB8D80
// rva 0x01eb8d80  size 629  section .text  group text
// window base 0x181eb8d80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB8D80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  _DWORD *v12; // rsi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v25; // r9
  char *v26; // rdx
  char v27; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v28; // [rsp+10h] [rbp-48h]
  _DWORD *v29; // [rsp+18h] [rbp-40h]
  unsigned __int64 v30; // [rsp+20h] [rbp-38h]
  _DWORD *v31; // [rsp+28h] [rbp-30h]
  unsigned int v32; // [rsp+34h] [rbp-24h]
  unsigned __int64 v33; // [rsp+38h] [rbp-20h]
  unsigned __int64 v34; // [rsp+40h] [rbp-18h]
  unsigned int v35; // [rsp+48h] [rbp-10h]
  int v36; // [rsp+4Ch] [rbp-Ch]
  _DWORD *v37; // [rsp+50h] [rbp-8h]

  v37 = a6;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v7 + 8) )
  {
    v36 = a5;
    sub_1EB84E0(a1, a2, a3, a4, a5, (__int64)a6, a7: v27);
    goto LABEL_35;
  }
  v30 = a3;
  v8 = *a6;
  if ( (_DWORD *)a3 == v6 )
  {
LABEL_35:
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
    return sub_1EB9000();
  }
  v36 = a5;
  v29 = &v6[2 * *(unsigned int *)(a3 + 24)];
  v35 = v8;
  v9 = sub_53F8360(a1, a2, a3: v29, a4: v29, a5: v8);
  if ( v36 < 2 )
  {
    v23 = v9;
  }
  else
  {
    v10 = v30;
    v28 = (_DWORD *)v9;
    v13 = (*(int *)(v30 + 32) >> 8) & 0xFFF;
    v14 = ((unsigned __int64)v35 << *(_DWORD *)(v30 + 32)) + v13;
    v34 = v14;
    if ( v14 <= v13 )
    {
      v23 = v9;
    }
    else
    {
      v33 = v13;
      v32 = v36 - 1;
      v31 = v37 + 1;
      v15 = sub_1EB8D80(a1: v11, a2: v12, a3: v29, a4: v14, a5: (unsigned int)(v36 - 1), a6: v37 + 1);
      v16 = v33;
      v17 = (unsigned __int64)v28;
      *(_DWORD *)((char *)v28 + v33) = (unsigned __int64)(v15 - (_QWORD)v6) >> 3;
      if ( (*(_DWORD *)v17 & 2) != 0 )
      {
        if ( (_DWORD *)v17 == v6 )
          JUMPOUT(0x303D42F71LL);
        if ( (*(_DWORD *)v17 & 1) != 0 )
        {
          v26 = (char *)(v17 - *(_QWORD *)(v17 - 8));
          if ( (_DWORD *)v17 == v6 )
            JUMPOUT(0x303D42FB6LL);
          if ( v26[(v16 >> 9) + 48] != 0 )
            v26[(v16 >> 9) + 48] = 0;
        }
        else
        {
          v25 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v25) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v25) >> 9) + 0x38) = 0;
        }
      }
      v10 = v16 + 4;
      v18 = v16 + 4;
      while ( 1 )
      {
        v12 = v31;
        if ( v34 <= v18 )
          break;
        v33 = v18;
        v19 = sub_1EB8D80(a1: v11, a2: v31, a3: v29, a4: v34, a5: v32, a6: v31);
        v10 = v33;
        v20 = (unsigned __int64)v28;
        *(_DWORD *)((char *)v28 + v33) = (unsigned __int64)(v19 - (_QWORD)v6) >> 3;
        v21 = v10 + 4;
        if ( (*(_DWORD *)v20 & 2) != 0 )
        {
          if ( (_DWORD *)v20 == v6 )
            JUMPOUT(0x303D42ED4LL);
          if ( (*(_DWORD *)v20 & 1) != 0 )
          {
            v22 = (char *)(v20 - *(_QWORD *)(v20 - 8));
            if ( (_DWORD *)v20 == v6 )
              JUMPOUT(0x303D42F16LL);
            v10 >>= 9;
            if ( v22[v10 + 48] != 0 )
              v22[v10 + 48] = 0;
            v18 = v21;
          }
          else
          {
            v10 = (v20 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((v20 - v10) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((v20 - v10) >> 9) + 0x38) = 0;
            v18 = v21;
          }
        }
        else
        {
          v18 = v10 + 4;
        }
      }
      v23 = (__int64)v28;
    }
  }
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1: v11, a2: v12, a3: v10, a4: v23);
  return v23;
}
