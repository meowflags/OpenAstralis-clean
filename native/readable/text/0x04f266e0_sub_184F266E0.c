// sub_4F266E0
// rva 0x04f266e0  size 788  section .text  group text
// window base 0x184f266e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F266E0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  _DWORD *v13; // rdx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r9
  __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 i; // rdi
  __int64 result; // rax
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rsi
  void (__fastcall *v30)(_QWORD, __int64, _DWORD *, _QWORD, __int64, _QWORD); // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // [rsp+0h] [rbp-48h] BYREF
  __int64 v36; // [rsp+8h] [rbp-40h]
  int v37; // [rsp+14h] [rbp-34h]
  _DWORD *v38; // [rsp+18h] [rbp-30h]
  _DWORD *v39; // [rsp+20h] [rbp-28h]
  unsigned int v40; // [rsp+2Ch] [rbp-1Ch]
  int v41; // [rsp+30h] [rbp-18h]
  int v42; // [rsp+34h] [rbp-14h]
  unsigned int v43; // [rsp+38h] [rbp-10h]
  unsigned int v44; // [rsp+3Ch] [rbp-Ch]
  __int64 (__fastcall *v45)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+40h] [rbp-8h]

  v39 = a3;
  v38 = a5;
  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a5 != v8 )
  {
    v37 = *a5 >> 3;
    if ( ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v37 + 46]))(a1, a2, a3: a5) != 0 )
    {
LABEL_25:
      v31 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v31 + 40) > *(_QWORD *)(v9 + 32) )
        goto LABEL_28;
      *(_QWORD *)(v9 + 40) = v31 + 40;
      *(_DWORD *)v31 = 42295768;
      *(_DWORD *)(v31 + 4) = 0;
      *(_QWORD *)(v31 + 8) = 0;
      *(_QWORD *)(v31 + 16) = 0;
      *(_QWORD *)(v31 + 24) = 0;
      *(_QWORD *)(v31 + 32) = 0;
      while ( 1 )
      {
        *(_DWORD *)(v31 + 20) = 46923644;
        *(_DWORD *)(v31 + 16) = v8[93585974];
        *(_DWORD *)(v31 + 12) = (unsigned __int64)(v31 - (_QWORD)v8) >> 3;
        v36 = v31;
        sub_503B9A0(a1: v11, a2: v12, a3: v31, a4: v10, a5: 0);
        sub_2769900(a1: v33, a2: v34, a3: v36, a4: v32, a5: &a7);
LABEL_28:
        v31 = sub_1EAA920(a1: v11, a2: v12, a3: 42295768);
      }
    }
    v13 = v39;
    v14 = (unsigned int)v38[8];
    v15 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v7
                                                                                 + *(_QWORD *)&v8[2 * (*v39 >> 3) + 40]);
    if ( (_DWORD)v14 == 0 || *((_BYTE *)v38 + 40) != 0 )
    {
      v16 = *(_QWORD *)(v9 + 40);
      v17 = *(_QWORD *)(v9 + 32);
      v18 = v38[6] - v38[5];
      if ( v18 < 0 )
        JUMPOUT(0x309E3C770LL);
      v19 = (unsigned int)v18;
      v20 = (2LL * (unsigned int)v18 + 19) & 0x3FFFFFFF8LL;
      if ( v20 >= 0x20000 || (v12 = v16 + v20, v16 + v20 > v17) )
      {
        v40 = v19;
        v45 = v15;
        v16 = sub_1EAA840(a1: v17, a2: v12, a3: 34089376, a4: v19, a5: (unsigned int)v19);
        v19 = v40;
        v15 = v45;
        v13 = v39;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v12;
        *(_QWORD *)v16 = 34089376;
        *(_DWORD *)(v16 + 8) = v19;
        *(_DWORD *)(v16 + 12) = 0;
        if ( v20 - 16 >= 0x800 )
        {
          v40 = v19;
          v45 = v15;
          memset((void *)(v16 + 16), 0, v20 - 16);
          v19 = v40;
        }
        else
        {
          for ( i = 16; v20 > i; i += 8LL )
            *(_QWORD *)(v16 + i) = 0;
        }
      }
      v36 = v16;
      v40 = v19;
      result = v15(a1: (unsigned int)v19, a2: v12, a3: v13, a4: v19, a5: v16, a6: 0);
      if ( (int)result >= 1 )
      {
        v30 = (void (__fastcall *)(_QWORD, __int64, _DWORD *, _QWORD, __int64, _QWORD))(v7
                                                                                      + *(_QWORD *)&v8[2 * v37 + 146]);
        v43 = result;
        v30(a1: (unsigned int)result, a2: v23, a3: v38, a4: v30, a5: v36, a6: 0);
        result = v43;
      }
    }
    else
    {
      v45 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v7
                                                                                   + *(_QWORD *)&v8[2 * (*v39 >> 3) + 40]);
      v36 = sub_5505660(a1: v14, a2: v12, a3: v38);
      v44 = v38[5];
      if ( (int)(v38[6] - v44) < 0 )
        JUMPOUT(0x309E3C867LL);
      v43 = v38[6] - v44;
      v26 = sub_5505800(a1: v24, a2: v25, a3: v38);
      v42 = v44 + v26;
      result = v45(a1: v43, a2: v28, a3: v39, a4: v27, a5: v36, a6: v44 + v26);
      if ( (int)result >= 1 )
      {
        v41 = v44 + result;
        v40 = result;
        sub_54EF280(a1: v44 + (unsigned int)result, a2: v29, a3: v38, a4: v44, a5: v44 + (unsigned int)result);
        result = v40;
      }
    }
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
  goto LABEL_25;
}
