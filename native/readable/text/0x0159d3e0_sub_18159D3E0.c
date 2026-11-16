// sub_159D3E0
// rva 0x0159d3e0  size 1197  section .text  group text
// window base 0x18159d3e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159D3E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  _DWORD *v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdi
  unsigned int v25; // ebp
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  _DWORD *v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rsi
  _QWORD v49[3]; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v50; // [rsp+18h] [rbp-30h]
  __int64 v51; // [rsp+20h] [rbp-28h]
  __int64 v52; // [rsp+28h] [rbp-20h]
  int v53; // [rsp+34h] [rbp-14h]
  int v54; // [rsp+38h] [rbp-10h]
  unsigned int v55; // [rsp+3Ch] [rbp-Ch]
  unsigned int i; // [rsp+40h] [rbp-8h]
  unsigned int v57; // [rsp+44h] [rbp-4h]

  v52 = a3;
  if ( (unsigned __int64)v49 <= *(_QWORD *)(v8 + 8) )
  {
    v57 = a5;
    sub_1EB84E0();
  }
  else if ( a3 != v7 )
  {
    v9 = *(unsigned int *)(a3 + 4);
    v10 = a5 + 1;
    if ( (_DWORD)v9 == 0 )
    {
      v57 = a5;
      v19 = (_DWORD *)sub_276BEE0(a1, a2, a3: v10);
LABEL_7:
      v18 = *v19 >> 3;
      if ( *(__int16 *)(v7 + 8 * v18 + 62) < 6
        || *(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v18 + 16) + 32) != 93094 )
      {
        goto LABEL_9;
      }
      for ( i = 0; ; i = 0 )
      {
LABEL_12:
        if ( v52 == v7 )
          v22 = v7 + 353301280;
        else
          v22 = v52;
        v51 = v22;
        v23 = sub_50132E0(a1: v16, a2: v17, a3: 42);
        v25 = *(char *)(v51 + 12);
        v26 = v25;
        v27 = (unsigned int)(v23 << *(_BYTE *)(v51 + 12));
        if ( (int)v27 < 0 )
        {
          v55 = *(char *)(v51 + 12);
          v54 = v23;
          v43 = *(_QWORD *)(v8 + 40);
          if ( (unsigned __int64)(v43 + 40) > *(_QWORD *)(v8 + 32) )
          {
            v53 = v27;
            v43 = sub_1EAA920(a1: v24, a2: v27, a3: 34082880);
          }
          else
          {
            *(_QWORD *)(v8 + 40) = v43 + 40;
            *(_DWORD *)v43 = 34082880;
            *(_DWORD *)(v43 + 4) = 0;
            *(_QWORD *)(v43 + 8) = 0;
            *(_QWORD *)(v43 + 16) = 0;
            *(_QWORD *)(v43 + 24) = 0;
            *(_QWORD *)(v43 + 32) = 0;
            v53 = v27;
          }
          *(_DWORD *)(v43 + 20) = 46923644;
          *(_DWORD *)(v43 + 16) = *(_DWORD *)(v7 + 374343896);
          *(_DWORD *)(v43 + 12) = (unsigned __int64)(v43 - v7) >> 3;
          v50 = (_DWORD *)v43;
          sub_503B9A0(a1: v24, a2: v27, a3: v43, a4: v26, a5: 0);
          v44 = (unsigned __int64)v50;
          v50[2] = 46004603;
          if ( (*(_DWORD *)v44 & 2) != 0 )
          {
            v20 = (v44 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v44 & 0xFFFFFFFFFFF80000LL) + ((v44 - v20) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v44 & 0xFFFFFFFFFFF80000LL) + ((v44 - v20) >> 9) + 0x38) = 0;
            v19 = (_DWORD *)v44;
          }
          else
          {
            v19 = (_DWORD *)v44;
          }
        }
        else
        {
          v53 = *(char *)(v51 + 12);
          v28 = *(_QWORD *)(v8 + 40);
          v29 = *(_QWORD *)(v8 + 32);
          v30 = ((unsigned int)v27 + 19LL) & 0x1FFFFFFF8LL;
          if ( v30 >= 0x20000 || (v30 += v28, v30 > v29) )
          {
            v55 = v25;
            v54 = v23;
            v28 = sub_1EAA840(a1: v30, a2: v27, a3: 34082368, a4: 34082368, a5: (unsigned int)v27, a6: v29);
            v25 = v55;
          }
          else
          {
            *(_QWORD *)(v8 + 40) = v30;
            *(_QWORD *)v28 = 34082368;
            *(_DWORD *)(v28 + 8) = v27;
            v54 = v23;
          }
          v50 = (_DWORD *)v28;
          v55 = v25;
          sub_4FF2C40(a1: v25, a2: v27, a3: v7 + 57669480, a4: v28, a5: v28, a6: 0);
          sub_4FF2C40(a1: v55, a2: v32, a3: v51, a4: v31, a5: v50, a6: 1);
          v35 = *(unsigned int *)(v51 + 4);
          if ( (_DWORD)v35 == 0 )
          {
            sub_2771080(a1: v33, a2: v57, a3: v50, a4: i);
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
            return sub_159D8A0(a1: v47, a2: v48, a3: v46);
          }
          sub_4FF2C40(
            a1: v55,
            a2: v34,
            a3: v7 + 57669504,
            a4: (unsigned int)*(char *)(v51 + 12),
            a5: v50,
            a6: (unsigned int)((*(_DWORD *)(v7 + 8 * v35 + 8) >> *(_BYTE *)(v51 + 12)) + 1));
          v39 = *(_QWORD *)(v8 + 40);
          if ( (unsigned __int64)(v39 + 40) > *(_QWORD *)(v8 + 32) )
          {
            v39 = sub_1EAA920(a1: v37, a2: v38, a3: 34081944);
          }
          else
          {
            *(_QWORD *)(v8 + 40) = v39 + 40;
            *(_DWORD *)v39 = 34081944;
            *(_DWORD *)(v39 + 4) = 0;
            *(_QWORD *)(v39 + 8) = 0;
            *(_QWORD *)(v39 + 16) = 0;
            *(_QWORD *)(v39 + 24) = 0;
            *(_QWORD *)(v39 + 32) = 0;
          }
          v51 = v39;
          *(_DWORD *)(v39 + 20) = 46923644;
          *(_DWORD *)(v39 + 16) = *(_DWORD *)(v7 + 374343896);
          *(_DWORD *)(v39 + 12) = (unsigned __int64)(v39 - v7) >> 3;
          v40 = sub_503B9A0(a1: v37, a2: v38, a3: v39, a4: v36, a5: 0);
          v41 = *(_QWORD *)(v8 + 40);
          if ( (unsigned __int64)(v41 + 24) > *(_QWORD *)(v8 + 32) )
          {
            v49[2] = v40;
            v41 = sub_1EAA920(a1: v16, a2: v17, a3: 34082680);
          }
          else
          {
            *(_QWORD *)(v8 + 40) = v41 + 24;
            *(_DWORD *)v41 = 34082680;
            *(_DWORD *)(v41 + 4) = 0;
            *(_QWORD *)(v41 + 8) = 0;
            *(_QWORD *)(v41 + 16) = 0;
          }
          v20 = v51;
          v42 = v50;
          *(_BYTE *)(v41 + 12) = v53;
          *(_DWORD *)(v41 + 4) = ((unsigned __int64)v42 - v7) >> 3;
          *(_DWORD *)(v20 + 8) = (unsigned __int64)(v41 - v7) >> 3;
          if ( (*(_DWORD *)v20 & 2) != 0 )
          {
            v45 = (v20 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((v20 - v45) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((v20 - v45) >> 9) + 0x38) = 0;
            v19 = (_DWORD *)v20;
          }
          else
          {
            v19 = (_DWORD *)v20;
          }
        }
        do
        {
          do
          {
LABEL_9:
            v19 = (_DWORD *)sub_2769900(a1: v16, a2: v17, a3: v19, a4: v20, a5: &a7);
            v21 = *v19 >> 3;
          }
          while ( *(__int16 *)(v7 + 8 * v21 + 62) < 6 );
        }
        while ( *(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v21 + 16) + 32) != 93094 );
      }
    }
    v57 = a5;
    v11 = (unsigned int)(*(_DWORD *)(v7 + 8 * v9 + 8) >> *(_BYTE *)(a3 + 12));
    i = a5 + 1;
    v51 = sub_4FFD140(a1, a2, a3, a4: a3, a5: v10, a6: v11);
    result = sub_4F8A060(a1: v13, a2: v14, a3: v51, a4: v12, a5: 10);
    if ( (int)result < 1 )
    {
      i = result;
      goto LABEL_12;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  v57 = a5;
  v19 = (_DWORD *)sub_276BEE0();
  goto LABEL_7;
}
