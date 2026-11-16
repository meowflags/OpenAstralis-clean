// sub_181593700
// rva 0x01593700  size 687  section .text  group text
// window base 0x181593700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181593700(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rsi
  _DWORD *i; // r9
  int v10; // ecx
  _BYTE *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  char *v14; // rbx
  _BYTE *v15; // rbp
  char *v16; // rdx
  char v18; // [rsp+10h] [rbp-58h] BYREF
  int v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+24h] [rbp-44h]
  __int64 v21; // [rsp+28h] [rbp-40h]
  char *v22; // [rsp+30h] [rbp-38h]
  _BYTE *v23; // [rsp+38h] [rbp-30h]
  char *v24; // [rsp+40h] [rbp-28h]
  unsigned int v25; // [rsp+4Ch] [rbp-1Ch]
  char *v26; // [rsp+50h] [rbp-18h]
  __int64 v27; // [rsp+58h] [rbp-10h]
  __int64 v28; // [rsp+60h] [rbp-8h]

  v28 = a5;
  v27 = a6;
  sub_1815933A0(a1, a2, a3: v6 + 376612472, a4, a5: a6, a6: a5);
  i = (_DWORD *)v27;
  *(_BYTE *)(v27 + 25) = 1;
  v10 = i[4];
  if ( v10 >= 2 )
  {
    v26 = &v18;
    v25 = v10;
    v11 = *(_BYTE **)(*(_QWORD *)i + 8LL);
    if ( v11 != nullptr && *v11 == 45 )
      JUMPOUT(0x18159391ALL);
    v12 = 2;
    v13 = v25;
    v14 = v26;
    for ( i = (_DWORD *)v27; ; i = (_DWORD *)v27 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (int)v13 <= v12 )
              return sub_181593500(a1: v7, a2: v8, a3: (__int64)i);
            v15 = *(_BYTE **)(*(_QWORD *)i + 8LL * v12);
            v8 = (unsigned int)(v12 + 1);
            if ( v15 != nullptr )
              break;
            ++v12;
          }
          v16 = *v15 == 45 ? v15 + 1 : nullptr;
          if ( v16 != nullptr )
            break;
          ++v12;
        }
        v20 = v12;
        v23 = v15;
        v22 = v16;
        v7 = (unsigned int)*v16;
        if ( *v16 == 88 )
          break;
        v21 = 0;
LABEL_12:
        v19 = v12 + 1;
        if ( (_BYTE)v7 == 88 )
        {
          if ( v16[1] == 88 )
          {
            if ( v16[2] == 58 )
            {
              if ( v16 == (char *)-3LL )
              {
                v12 = v19;
              }
              else
              {
                v24 = v16 + 3;
                sub_181593B80(a1: v7, a2: v8, a3: v27, a4: v24, a5: v26, a6: v24);
                v12 = v19;
                v13 = v25;
                v14 = v26;
                i = (_DWORD *)v27;
              }
            }
            else
            {
              v12 = v19;
            }
          }
          else
          {
            v12 = v19;
          }
        }
        else
        {
          v12 = v19;
        }
      }
      if ( v16[1] != 109 )
      {
        v21 = 0;
        goto LABEL_12;
      }
      if ( v16 == (char *)-2LL )
      {
        v21 = 0;
        goto LABEL_12;
      }
      v19 = v12 + 1;
      v24 = v16 + 2;
      sub_181593A40(a1: v7, a2: v8, a3: i, a4: v13, a5: v14, a6: v16 + 2);
      v12 = v19;
      v13 = v25;
      v14 = v26;
    }
  }
  return sub_181593500(a1: v7, a2: v8, a3: (__int64)i);
}
