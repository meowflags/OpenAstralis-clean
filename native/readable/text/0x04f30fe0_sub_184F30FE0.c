// sub_4F30FE0
// rva 0x04f30fe0  size 679  section .text  group text
// window base 0x184f30fe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F30FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  int v13; // ebx
  unsigned int v14; // eax
  __int64 v15; // rdi
  int i; // eax
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 result; // rax
  __int64 v29; // [rsp+0h] [rbp-48h] BYREF
  __int64 v30; // [rsp+10h] [rbp-38h]
  __int64 v31; // [rsp+18h] [rbp-30h]
  unsigned int v32; // [rsp+24h] [rbp-24h]
  unsigned int v33; // [rsp+28h] [rbp-20h]
  int v34; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v35; // [rsp+30h] [rbp-18h]
  unsigned int v36; // [rsp+34h] [rbp-14h]
  unsigned int v37; // [rsp+38h] [rbp-10h]
  unsigned int v38; // [rsp+3Ch] [rbp-Ch]
  int v39; // [rsp+40h] [rbp-8h]
  int v40; // [rsp+44h] [rbp-4h]

  v31 = a3;
  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_39;
  }
  v30 = a5;
  v7 = sub_4F33A00(a1, a2, a3: a5);
  if ( v7 == v5 )
  {
LABEL_39:
    sub_2771080();
LABEL_40:
    sub_2771080();
    return sub_277F280();
  }
  v30 = v7;
  v10 = *(unsigned int *)(v7 + 4);
  if ( (_DWORD)v10 == 0 )
    goto LABEL_40;
  v11 = *(_DWORD *)(v5 + 8 * v10 + 8);
  v12 = (unsigned int)*(char *)(v7 + 12);
  v13 = *(unsigned __int16 *)(v31 + 4);
  v40 = v13;
  v39 = *(unsigned __int16 *)(v31 + 6);
  v38 = v11 >> v12;
  if ( v11 >> v12 != 0 )
  {
    v14 = sub_4FEBC20(a1: v8, a2: v9, a3: v7, a4: v12, a5: 0);
    if ( v39 == v14 )
    {
      v36 = v14;
      v23 = 0;
      v24 = 0;
LABEL_25:
      if ( v40 == v24 )
        v25 = (unsigned int)(v23 - 1);
      else
        v25 = (unsigned int)v23;
      v33 = v23;
      v32 = v24;
      result = sub_4F312A0(a1: v25, a2: v9, a3: v31, a4: v23, a5: v30, a6: v38);
      if ( *(int *)(v6 + 16) <= 0 )
        return sub_277F280(a1: v26, a2: v27, a3: v36, a4: v33, a5: v32);
    }
    else
    {
      v35 = v14;
      for ( i = 1; ; i = v34 + 1 )
      {
        while ( 1 )
        {
          v12 = v30;
          if ( (int)v38 <= i )
          {
            v37 = i;
            v19 = v35;
            v13 = v40;
            goto LABEL_18;
          }
          v34 = i;
          v17 = sub_4FEBC20(a1: v15, a2: v9, a3: v30, a4: v30, a5: (unsigned int)i);
          if ( v39 == v17 )
          {
            v36 = v17;
            v23 = (unsigned int)v34;
            v24 = v35;
            goto LABEL_25;
          }
          if ( v40 == v17 && v40 == v35 && v34 >= 2 )
          {
            v33 = v17;
            result = sub_4F312A0(a1: (unsigned int)(v34 - 1), a2: v9, a3: v31, a4: v18, a5: v30, a6: v38);
            if ( *(int *)(v6 + 16) <= 0 )
              return sub_277F280(a1: v35, a2: (unsigned int)v34, a3: v30, a4: v33, a5: v38, a6: v31);
            return result;
          }
          if ( v17 == 58 )
            break;
          v35 = v17;
          i = v34 + 1;
        }
        if ( v34 >= 2 )
          break;
        v35 = 58;
      }
      result = sub_4F312A0(a1: 0, a2: v9, a3: v31, a4: v18, a5: v30, a6: v38);
      if ( *(int *)(v6 + 16) <= 0 )
        return sub_277F280();
    }
  }
  else
  {
    v37 = 0;
    v19 = 0;
LABEL_18:
    if ( v13 == v19 )
    {
      v32 = v19;
      result = sub_4F312A0(a1: v38 - 1, a2: v9, a3: v31, a4: v12, a5: v30, a6: v38);
      if ( *(int *)(v6 + 16) <= 0 )
        return sub_277F280(a1: v21, a2: v22, a3: v37, a4: v20, a5: v32);
    }
    else
    {
      if ( *(int *)(v6 + 16) <= 0 )
      {
        v32 = v19;
        sub_277F280();
      }
      return v30;
    }
  }
  return result;
}
